//
//  SingleLabelTableRow.h
//  AppleWatchUIDemo
//
//  Created by Pablo Yaniero on 26/10/15.
//  Copyright © 2015 Pablo Yaniero. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface SingleLabelTableRow : NSObject

@property (unsafe_unretained, nonatomic) IBOutlet WKInterfaceLabel *titleLabel;

@end
