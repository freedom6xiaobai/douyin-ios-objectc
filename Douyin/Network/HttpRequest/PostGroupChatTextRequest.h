//
//  PostGroupChatTextRequest.h
//  Douyin
//
//  Created by Qiao Shi on 2018/7/30.
//  Copyright © 2018年 Qiao Shi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseRequest.h"
@interface PostGroupChatTextRequest:BaseRequest
@property (nonatomic, copy) NSString *udid;
@property (nonatomic, copy) NSString *text;
@end
