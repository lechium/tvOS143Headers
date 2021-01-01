/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFBCWriteDnuForSubmission : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * filePrefix; 
@property (nonatomic,copy) NSString * submittedData; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)writeDnuForSubmission;
+(id)writeDnuForSubmissionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)filePrefix;
-(void)setFilePrefix:(NSString *)arg1 ;
-(NSString *)submittedData;
-(void)setSubmittedData:(NSString *)arg1 ;
@end

