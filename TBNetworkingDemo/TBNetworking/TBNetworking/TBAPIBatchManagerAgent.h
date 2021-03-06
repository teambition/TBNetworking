//
//  TBAPIBatchAgent.h
//  TBNetworking
//
//  Created by ChenHao on 7/31/15.
//  Copyright (c) 2015 Teambition. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TBAPIBatchManager;

@interface TBAPIBatchManagerAgent : NSObject

+ (TBAPIBatchManagerAgent *)sharedInstance;

- (void)addBatchManager:(TBAPIBatchManager *)manager;

- (void)removeBatchManager:(TBAPIBatchManager *)manager;

@end
