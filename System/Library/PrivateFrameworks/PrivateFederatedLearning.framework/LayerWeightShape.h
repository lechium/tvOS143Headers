/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, GPBInt32Array;

@interface LayerWeightShape : GPBMessage

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,retain) GPBInt32Array * weightShapeArray; 
@property (nonatomic,readonly) unsigned long long weightShapeArray_Count; 
@property (nonatomic,retain) GPBInt32Array * biasShapeArray; 
@property (nonatomic,readonly) unsigned long long biasShapeArray_Count; 
+(id)descriptor;
@end

