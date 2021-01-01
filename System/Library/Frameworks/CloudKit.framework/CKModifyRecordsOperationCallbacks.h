/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKModifyRecordsOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleRecordIDsInFlight:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleDeleteForRecordID:(id)arg1 error:(id)arg2;
-(void)handleSaveForRecordID:(id)arg1 etag:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 serverRecord:(id)arg5 protectionData:(id)arg6 pcsKeyID:(id)arg7 allPCSKeyIDs:(id)arg8 zoneishKeyID:(id)arg9 error:(id)arg10;
-(void)handleRecordModificationForRecordID:(id)arg1 didProgress:(double)arg2;
-(void)handleRecordUploadForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 signature:(id)arg4 size:(unsigned long long)arg5 paddedFileSize:(unsigned long long)arg6 uploaded:(BOOL)arg7 uploadReceipt:(id)arg8 uploadReceiptExpiration:(double)arg9 wrappedAssetKey:(id)arg10 clearAssetKey:(id)arg11 referenceSignature:(id)arg12;

@end

