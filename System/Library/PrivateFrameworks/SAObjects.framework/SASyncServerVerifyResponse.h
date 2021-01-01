/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncServerVerifyResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * internalVerifications; 
@property (nonatomic,copy) NSArray * serverChecksums; 
@property (nonatomic,copy) NSArray * syncDebugInfo; 
+(id)serverVerifyResponse;
+(id)serverVerifyResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)internalVerifications;
-(void)setInternalVerifications:(NSArray *)arg1 ;
-(NSArray *)serverChecksums;
-(void)setServerChecksums:(NSArray *)arg1 ;
-(NSArray *)syncDebugInfo;
-(void)setSyncDebugInfo:(NSArray *)arg1 ;
@end

