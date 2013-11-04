//
//  PlotSide.h
//  Calculator
//
//  Created by Александр Коровкин on 04.11.13.
//  Copyright (c) 2013 Александр Коровкин. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Plot, PlotDiagonal;

@interface PlotSide : NSManagedObject

@property (nonatomic, retain) NSString * angleFirst;
@property (nonatomic, retain) NSString * angleSecond;
@property (nonatomic, retain) NSNumber * sideWidth;
@property (nonatomic, retain) NSSet *sideDiagonal;
@property (nonatomic, retain) Plot *sidePlot;
@end

@interface PlotSide (CoreDataGeneratedAccessors)

- (void)addSideDiagonalObject:(PlotDiagonal *)value;
- (void)removeSideDiagonalObject:(PlotDiagonal *)value;
- (void)addSideDiagonal:(NSSet *)values;
- (void)removeSideDiagonal:(NSSet *)values;

@end
