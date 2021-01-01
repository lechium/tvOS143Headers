/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSString, TRIApproval, TRIPBEnumArray;

@interface TRIDeploymentRequest : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * requestedTimestamp; 
@property (assign,nonatomic) BOOL hasRequestedTimestamp; 
@property (nonatomic,copy) NSString * requestedBy; 
@property (assign,nonatomic) BOOL hasRequestedBy; 
@property (nonatomic,retain) TRIApproval * programOfficeApproval; 
@property (assign,nonatomic) BOOL hasProgramOfficeApproval; 
@property (nonatomic,retain) TRIPBEnumArray * deploymentTypeArray; 
@property (nonatomic,readonly) unsigned long long deploymentTypeArray_Count; 
+(id)descriptor;
@end

