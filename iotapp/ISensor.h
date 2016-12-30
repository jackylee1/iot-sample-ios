//
//  ISensor.h
//  firstapp
//
//  Created by chttl on 2016/6/24.
//  Copyright © 2016年 chttl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BWJSONValueObject.h"
#import "IAttribute.h"

@interface ISensor : NSObject <BWJSONHasArrayProperties>

@property (strong, nonatomic) NSString* id;
@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSString* desc;
@property (strong, nonatomic) NSString* type;
@property (strong, nonatomic) NSString* uri;
@property (strong, nonatomic) NSString* unit;
@property (strong, nonatomic) NSString* formula;
@property (strong, nonatomic) NSArray<IAttribute *>* attributes;

@end
