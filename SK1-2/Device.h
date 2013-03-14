//
//  Device.h
//  SK1-2
//
//  Created by Administrator on 3/5/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Device : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int *gsmNumber;
@property (nonatomic, copy) NSString *passCode;

@end
