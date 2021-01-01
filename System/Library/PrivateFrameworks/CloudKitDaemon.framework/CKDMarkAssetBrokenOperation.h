/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKUploadRequestConfiguration, CKRecordID, NSString, CKDFetchRecordsOperation, CKDFetchRecordZonesOperation, CKDModifyRecordZonesOperation, CKDModifyRecordsOperation, CKDMarkAssetBrokenURLRequestWrapperOperation, CKRecordZone, CKRecord, NSError;

@interface CKDMarkAssetBrokenOperation : CKDDatabaseOperation {

	BOOL _touchRepairZone;
	BOOL _bypassPCSEncryptionForTouchRepairZone;
	BOOL _simulateCorruptAsset;
	BOOL _writeRepairRecord;
	/*^block*/id _assetOrPackageMarkedBrokenBlock;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	CKRecordID* _recordID;
	NSString* _field;
	long long _listIndex;
	CKDFetchRecordsOperation* _fetchOperation;
	CKDFetchRecordZonesOperation* _zoneFetchOperation;
	CKDModifyRecordZonesOperation* _zoneCreateOperation;
	CKDModifyRecordsOperation* _corruptOperation;
	CKDMarkAssetBrokenURLRequestWrapperOperation* _wrapperOperation;
	CKRecordZone* _repairZone;
	CKRecord* _record;
	unsigned long long _numMarkAssetBrokenFailures;
	NSError* _markAssetBrokenError;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;                         //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (assign,nonatomic) BOOL touchRepairZone;                                                              //@synthesize touchRepairZone=_touchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone;                                        //@synthesize bypassPCSEncryptionForTouchRepairZone=_bypassPCSEncryptionForTouchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL simulateCorruptAsset;                                                         //@synthesize simulateCorruptAsset=_simulateCorruptAsset - In the implementation block
@property (assign,nonatomic) BOOL writeRepairRecord;                                                            //@synthesize writeRepairRecord=_writeRepairRecord - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                                             //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * field;                                                                  //@synthesize field=_field - In the implementation block
@property (assign,nonatomic) long long listIndex;                                                               //@synthesize listIndex=_listIndex - In the implementation block
@property (nonatomic,retain) CKDFetchRecordsOperation * fetchOperation;                                         //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) CKDFetchRecordZonesOperation * zoneFetchOperation;                                 //@synthesize zoneFetchOperation=_zoneFetchOperation - In the implementation block
@property (nonatomic,retain) CKDModifyRecordZonesOperation * zoneCreateOperation;                               //@synthesize zoneCreateOperation=_zoneCreateOperation - In the implementation block
@property (nonatomic,retain) CKDModifyRecordsOperation * corruptOperation;                                      //@synthesize corruptOperation=_corruptOperation - In the implementation block
@property (nonatomic,retain) CKDMarkAssetBrokenURLRequestWrapperOperation * wrapperOperation;                   //@synthesize wrapperOperation=_wrapperOperation - In the implementation block
@property (nonatomic,retain) CKRecordZone * repairZone;                                                         //@synthesize repairZone=_repairZone - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                                                 //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) unsigned long long numMarkAssetBrokenFailures;                                     //@synthesize numMarkAssetBrokenFailures=_numMarkAssetBrokenFailures - In the implementation block
@property (nonatomic,retain) NSError * markAssetBrokenError;                                                    //@synthesize markAssetBrokenError=_markAssetBrokenError - In the implementation block
@property (nonatomic,retain) id<CKMarkAssetBrokenOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id assetOrPackageMarkedBrokenBlock;                                                  //@synthesize assetOrPackageMarkedBrokenBlock=_assetOrPackageMarkedBrokenBlock - In the implementation block
-(void)main;
-(void)setListIndex:(long long)arg1 ;
-(CKRecordID *)recordID;
-(int)operationType;
-(NSString *)field;
-(void)setField:(NSString *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecord *)record;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(long long)listIndex;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)setTouchRepairZone:(BOOL)arg1 ;
-(BOOL)touchRepairZone;
-(BOOL)simulateCorruptAsset;
-(void)setSimulateCorruptAsset:(BOOL)arg1 ;
-(BOOL)bypassPCSEncryptionForTouchRepairZone;
-(void)setBypassPCSEncryptionForTouchRepairZone:(BOOL)arg1 ;
-(BOOL)writeRepairRecord;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setAssetOrPackageMarkedBrokenBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(CKDFetchRecordsOperation *)fetchOperation;
-(void)setFetchOperation:(CKDFetchRecordsOperation *)arg1 ;
-(void)_fetchRecord;
-(void)_touchFetchRepairZone;
-(void)_breakAsset;
-(void)_markAssetBroken;
-(CKRecordZone *)repairZone;
-(void)_touchCreateRepairZone;
-(NSError *)markAssetBrokenError;
-(unsigned long long)numMarkAssetBrokenFailures;
-(void)setNumMarkAssetBrokenFailures:(unsigned long long)arg1 ;
-(void)setMarkAssetBrokenError:(NSError *)arg1 ;
-(id)repairContext;
-(void)setRepairZone:(CKRecordZone *)arg1 ;
-(void)setZoneFetchOperation:(CKDFetchRecordZonesOperation *)arg1 ;
-(void)setZoneCreateOperation:(CKDModifyRecordZonesOperation *)arg1 ;
-(id)checkPreconditions;
-(id)assetOrPackageForFetchedRecord;
-(void)setCorruptOperation:(CKDModifyRecordsOperation *)arg1 ;
-(id)assetOrPackageMarkedBrokenBlock;
-(void)setWrapperOperation:(CKDMarkAssetBrokenURLRequestWrapperOperation *)arg1 ;
-(CKDFetchRecordZonesOperation *)zoneFetchOperation;
-(CKDModifyRecordZonesOperation *)zoneCreateOperation;
-(CKDModifyRecordsOperation *)corruptOperation;
-(CKDMarkAssetBrokenURLRequestWrapperOperation *)wrapperOperation;
@end

