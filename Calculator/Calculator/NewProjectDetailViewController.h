//
//  NewProjectDetailViewController.h
//  Calculator
//
//  Created by Александр Коровкин on 23.09.13.
//  Copyright (c) 2013 Александр Коровкин. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewProjectListViewController.h"
#import "CalcAppDelegate.h"
#import "CostViewController.h"

#import "Projects.h"
#import "Plot.h"
#import "NewPlotViewController.h"
#import "ProjectPlotCell.h"

#import "PlotModel.h"

@interface NewProjectDetailViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>


@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) Projects *project;

@property (strong, nonatomic) IBOutlet UITextField *nameClient;
@property (strong, nonatomic) IBOutlet UITextField *adressClient;
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) IBOutlet UITextField *lusterClient;
@property (strong, nonatomic) IBOutlet UITextField *bypassClient;
@property (strong, nonatomic) IBOutlet UITextField *spotClient;
@property (strong, nonatomic) IBOutlet UITextView *explaneClient;

@property (weak, nonatomic) IBOutlet UITableView *PlotTableView;
@property (nonatomic, strong) Plot *plot;

- (IBAction)addPlot:(id)sender;


@end
