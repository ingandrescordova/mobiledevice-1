//
//  Task.h
//  mobiledevice
//
//  Created by huangyi on 15/8/31.
//  Copyright (c) 2015年 wettags. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AMDevice;

@interface Task : NSObject

+(Task*)taskWithDevice:(AMDevice *)device;

-(void)Execute:(NSDictionary *)args;

@end
