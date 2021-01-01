/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString, NSDictionary, NSArray, CKPCSDiagnosticInformation;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation {

	NSString* _identityStatus;
	NSDictionary* _invalidPCSByZoneID;
	NSDictionary* _validPCSByZoneID;
	NSArray* _recordZoneIDs;
	CKPCSDiagnosticInformation* _pcsDiagnosticInfo;

}

@property (nonatomic,retain) NSString * identityStatus;                                   //@synthesize identityStatus=_identityStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidPCSByZoneID;                           //@synthesize invalidPCSByZoneID=_invalidPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSDictionary * validPCSByZoneID;                             //@synthesize validPCSByZoneID=_validPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDs;                                     //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) CKPCSDiagnosticInformation * pcsDiagnosticInfo;              //@synthesize pcsDiagnosticInfo=_pcsDiagnosticInfo - In the implementation block
-(void)main;
-(int)operationType;
-(id)activityCreate;
-(id)relevantZoneIDs;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKPCSDiagnosticInformation *)pcsDiagnosticInfo;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(NSString *)identityStatus;
-(void)setIdentityStatus:(NSString *)arg1 ;
-(NSDictionary *)invalidPCSByZoneID;
-(void)setInvalidPCSByZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)validPCSByZoneID;
-(void)setValidPCSByZoneID:(NSDictionary *)arg1 ;
-(void)setPcsDiagnosticInfo:(CKPCSDiagnosticInformation *)arg1 ;
@end

