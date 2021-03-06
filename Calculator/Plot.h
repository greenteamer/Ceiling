//
//  Plot.h
//  Calculator
//
//  Created by Александр Коровкин on 13.11.13.
//  Copyright (c) 2013 Александр Коровкин. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Materials, PlotDiagonal, PlotSide, Projects;

@interface Plot : NSManagedObject

@property (nonatomic, retain) NSNumber * bypassCount;
@property (nonatomic, retain) NSNumber * lusterCount;
@property (nonatomic, retain) NSString * plotName;
@property (nonatomic, retain) NSNumber * plotPerimetr;
@property (nonatomic, retain) NSNumber * plotPrice;
@property (nonatomic, retain) NSNumber * plotSquare;
@property (nonatomic, retain) NSNumber * spotCount;
@property (nonatomic, retain) NSNumber * isCheckKant;
@property (nonatomic, retain) NSNumber * plotCurve;
@property (nonatomic, retain) NSSet *plotDiagonal;
@property (nonatomic, retain) Materials *plotMaterial;
@property (nonatomic, retain) Projects *plotProject;
@property (nonatomic, retain) NSSet *plotSide;
@end

@interface Plot (CoreDataGeneratedAccessors)

- (void)addPlotDiagonalObject:(PlotDiagonal *)value;
- (void)removePlotDiagonalObject:(PlotDiagonal *)value;
- (void)addPlotDiagonal:(NSSet *)values;
- (void)removePlotDiagonal:(NSSet *)values;

- (void)addPlotSideObject:(PlotSide *)value;
- (void)removePlotSideObject:(PlotSide *)value;
- (void)addPlotSide:(NSSet *)values;
- (void)removePlotSide:(NSSet *)values;

@end
