/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIFactorLevels;

@interface TRICompatibilityVersion : TRIPBMessage

@property (assign,nonatomic) unsigned id_p; 
@property (assign,nonatomic) BOOL hasId_p; 
@property (nonatomic,retain) TRIFactorLevels * defaultFactorLevels; 
@property (assign,nonatomic) BOOL hasDefaultFactorLevels; 
@property (nonatomic,retain) TRIFactorLevels * control; 
@property (assign,nonatomic) BOOL hasControl; 
+(id)descriptor;
@end

