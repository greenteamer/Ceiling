//
//  PlotVisualController.h
//  Calculator
//
//  Created by Ричард Попов on 19.10.13.
//  Copyright (c) 2013 Александр Коровкин. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Plot.h"
#import "PlotDiagonal.h"
#import "CalculationService.h"
#import "CoordModel.h"

@interface PlotVisualController : UIViewController

@property (nonatomic, strong) Plot *plot;

@end
