/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSFinancePerformable.h>

@class AMSDialogRequest, NSDictionary, AMSURLTaskInfo, NSString;

@interface AMSFinanceVerifyPurchaseResponse : NSObject <AMSFinancePerformable> {

	AMSDialogRequest* _dialogRequest;
	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;
	long long _verifyType;

}

@property (nonatomic,retain) AMSDialogRequest * dialogRequest;               //@synthesize dialogRequest=_dialogRequest - In the implementation block
@property (nonatomic,retain) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) AMSURLTaskInfo * taskInfo;                      //@synthesize taskInfo=_taskInfo - In the implementation block
@property (assign,nonatomic) long long verifyType;                           //@synthesize verifyType=_verifyType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isVerifyPurchasePayload:(id)arg1 ;
+(long long)_verifyTypeFromPayload:(id)arg1 ;
+(id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2 ;
+(id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2 ;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(AMSDialogRequest *)dialogRequest;
-(void)setDialogRequest:(AMSDialogRequest *)arg1 ;
-(AMSURLTaskInfo *)taskInfo;
-(id)performWithTaskInfo:(id)arg1 ;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(id)initWithPayload:(id)arg1 taskInfo:(id)arg2 ;
-(long long)verifyType;
-(id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(BOOL*)arg2 ;
-(id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(BOOL*)arg2 ;
-(id)_runCarrierNewCodeWithError:(id*)arg1 ;
-(id)_runCarrierVerifyCode:(id)arg1 error:(id*)arg2 ;
-(id)_runCVVRequestForCode:(id)arg1 error:(id*)arg2 ;
-(void)setVerifyType:(long long)arg1 ;
@end

