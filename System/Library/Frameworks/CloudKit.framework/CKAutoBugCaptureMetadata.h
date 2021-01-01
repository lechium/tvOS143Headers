/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CKContainerID, NSError;

@interface CKAutoBugCaptureMetadata : NSObject {

	NSString* _procName;
	CKContainerID* _containerID;
	NSError* _errorPayload;
	long long _reason;

}

@property (nonatomic,copy) NSString * procName;                      //@synthesize procName=_procName - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSError * errorPayload;                   //@synthesize errorPayload=_errorPayload - In the implementation block
@property (assign,nonatomic) long long reason;                       //@synthesize reason=_reason - In the implementation block
-(long long)reason;
-(NSString *)procName;
-(void)setReason:(long long)arg1 ;
-(CKContainerID *)containerID;
-(void)setProcName:(NSString *)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(NSError *)errorPayload;
-(void)setErrorPayload:(NSError *)arg1 ;
@end

