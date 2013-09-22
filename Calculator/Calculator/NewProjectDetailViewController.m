//
//  NewProjectDetailViewController.m
//  Calculator
//
//  Created by Александр Коровкин on 23.09.13.
//  Copyright (c) 2013 Александр Коровкин. All rights reserved.
//

#import "NewProjectDetailViewController.h"

@interface NewProjectDetailViewController ()

@end

@implementation NewProjectDetailViewController
@synthesize managedObjectContext;
@synthesize project;

@synthesize nameClient;
@synthesize adressClient;
@synthesize lusterClient;
@synthesize bypassClient;
@synthesize spotClient;
@synthesize explaneClient;

@synthesize scrollView;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}


-(NSManagedObjectContext *)managedObjectContext {
    return [(CalcAppDelegate *)[[UIApplication sharedApplication] delegate]managedObjectContext];
}


- (void)viewDidLoad
{
    [super viewDidLoad];
    [scrollView setScrollEnabled:YES];
    [scrollView setContentSize:CGSizeMake(320, 900)];
    [nameClient setDelegate:self];
    [adressClient setDelegate:self];
    [lusterClient setDelegate:self];
    [bypassClient setDelegate:self];
    [spotClient setDelegate:self];
    [explaneClient setDelegate:self];
    
    
    //сокрытие клавиатуры по нажатию на фон
    UITapGestureRecognizer *tapOnScrollView = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(dismissKeyboard)];
    [self.view addGestureRecognizer:tapOnScrollView];
    
    //добавляем кнопку редактирования
    UIBarButtonItem *saveButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemSave target:self action:@selector(saveData)];
    self.navigationItem.rightBarButtonItem = saveButton;
    
    [self reloadData];
    
}


-(void)reloadData {
    nameClient.text = project.projectName;
    adressClient.text = project.projectAdress;
    lusterClient.text = [project.projectLuster stringValue];
    bypassClient.text = [project.projectBypass stringValue];
    spotClient.text = [project.projectSpot stringValue];
    explaneClient.text = project.projectExplane;
}


-(void)saveData {
    project.projectName = nameClient.text;
    project.projectAdress = adressClient.text;
    project.projectLuster = [NSNumber numberWithInt:[lusterClient.text intValue]];
    project.projectBypass = [NSNumber numberWithInt:[bypassClient.text intValue]];
    project.projectSpot = [NSNumber numberWithInt:[spotClient.text intValue]];
    project.projectExplane = explaneClient.text;
    
    
    
    NSError *error = nil;
    if (![self.managedObjectContext save:&error]) {
    }
}


#pragma mark - dismiss keyboard
//dismiss keyboard
-(BOOL)textFieldShouldReturn:(UITextField *)textField {
    [self dismissKeyboard];
    return YES;
}


-(void)dismissKeyboard {

    [nameClient resignFirstResponder];
    [adressClient resignFirstResponder];
    [lusterClient resignFirstResponder];
    [bypassClient resignFirstResponder];
    [spotClient resignFirstResponder];
    [explaneClient resignFirstResponder];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end