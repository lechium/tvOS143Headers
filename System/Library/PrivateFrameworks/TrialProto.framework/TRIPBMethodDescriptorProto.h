/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,copy) NSString * inputType; 
@property (assign,nonatomic) BOOL hasInputType; 
@property (nonatomic,copy) NSString * outputType; 
@property (assign,nonatomic) BOOL hasOutputType; 
@property (nonatomic,retain) TRIPBMethodOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) BOOL clientStreaming; 
@property (assign,nonatomic) BOOL hasClientStreaming; 
@property (assign,nonatomic) BOOL serverStreaming; 
@property (assign,nonatomic) BOOL hasServerStreaming; 
+(id)descriptor;
@end

