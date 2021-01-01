/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PFCloudKitExporterOptions, NSMutableArray, NSArray;

@interface PFCloudKitExportContext : NSObject {

	PFCloudKitExporterOptions* _options;
	unsigned long long _totalBytes;
	unsigned long long _totalRecords;
	unsigned long long _totalRecordIDs;
	NSMutableArray* _writtenAssetURLs;

}

@property (nonatomic,readonly) NSArray * writtenAssetURLs;                     //@synthesize writtenAssetURLs=_writtenAssetURLs - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytes;                  //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalRecords;                //@synthesize totalRecords=_totalRecords - In the implementation block
@property (nonatomic,readonly) unsigned long long totalRecordIDs;              //@synthesize totalRecordIDs=_totalRecordIDs - In the implementation block
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)processAnalyzedHistoryInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)checkForObjectsNeedingExportInStore:(id)arg1 andReturnCount:(unsigned long long*)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
-(id)newOperationBySerializingDirtyObjectsInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)modifyRecordsOperationFinishedForStore:(id)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 operationError:(id)arg4 managedObjectContext:(id)arg5 error:(id*)arg6 ;
-(NSArray *)writtenAssetURLs;
-(unsigned long long)totalBytes;
-(BOOL)insertRecordMetadataForObjectIDsInBatch:(id)arg1 inManagedObjectContext:(id)arg2 withPendingTransactionNumber:(id)arg3 error:(id*)arg4 ;
-(BOOL)currentBatchExceedsThresholds:(id)arg1 ;
-(unsigned long long)totalRecords;
-(unsigned long long)totalRecordIDs;
@end

