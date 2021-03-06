/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAResponse.h>

@class NSString, NSNumber;

@interface AASetupAssistantCreateResponse : AAResponse {

	NSString* _HSAAction;
	NSString* _HSAData;

}

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSString * HSAAction;                  //@synthesize HSAAction=_HSAAction - In the implementation block
@property (nonatomic,readonly) NSString * HSAData;                    //@synthesize HSAData=_HSAData - In the implementation block
-(NSNumber *)status;
-(NSString *)personID;
-(NSString *)appleID;
-(NSString *)statusMessage;
-(NSString *)HSAAction;
-(NSString *)HSAData;
@end

