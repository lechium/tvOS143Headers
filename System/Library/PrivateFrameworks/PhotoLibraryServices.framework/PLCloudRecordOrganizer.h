/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLPhotoLibrary, NSMutableArray;

@interface PLCloudRecordOrganizer : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _assetRecordsWithContainerChange;
	NSMutableArray* _albumRecordsWithContainerChange;
	NSMutableArray* _personRecords;
	NSMutableArray* _scopeRecords;
	NSMutableArray* _masterRecords;
	NSMutableArray* _assetRecords;
	NSMutableArray* _albumRecords;
	NSMutableArray* _memoryRecords;
	NSMutableArray* _faceCropRecords;
	NSMutableArray* _deleteRecords;
	NSMutableArray* _deletePersonRecords;
	NSMutableArray* _expungedRecords;
	NSMutableArray* _suggestionRecords;

}

@property (readonly) NSMutableArray * assetRecordsWithContainerChange;              //@synthesize assetRecordsWithContainerChange=_assetRecordsWithContainerChange - In the implementation block
@property (readonly) NSMutableArray * albumRecordsWithContainerChange;              //@synthesize albumRecordsWithContainerChange=_albumRecordsWithContainerChange - In the implementation block
@property (readonly) NSMutableArray * personRecords;                                //@synthesize personRecords=_personRecords - In the implementation block
@property (readonly) NSMutableArray * scopeRecords;                                 //@synthesize scopeRecords=_scopeRecords - In the implementation block
@property (readonly) NSMutableArray * masterRecords;                                //@synthesize masterRecords=_masterRecords - In the implementation block
@property (readonly) NSMutableArray * assetRecords;                                 //@synthesize assetRecords=_assetRecords - In the implementation block
@property (readonly) NSMutableArray * albumRecords;                                 //@synthesize albumRecords=_albumRecords - In the implementation block
@property (readonly) NSMutableArray * memoryRecords;                                //@synthesize memoryRecords=_memoryRecords - In the implementation block
@property (readonly) NSMutableArray * faceCropRecords;                              //@synthesize faceCropRecords=_faceCropRecords - In the implementation block
@property (readonly) NSMutableArray * deleteRecords;                                //@synthesize deleteRecords=_deleteRecords - In the implementation block
@property (readonly) NSMutableArray * deletePersonRecords;                          //@synthesize deletePersonRecords=_deletePersonRecords - In the implementation block
@property (readonly) NSMutableArray * expungedRecords;                              //@synthesize expungedRecords=_expungedRecords - In the implementation block
@property (readonly) NSMutableArray * suggestionRecords;                            //@synthesize suggestionRecords=_suggestionRecords - In the implementation block
+(BOOL)records:(id)arg1 containsScopedIdentifier:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(NSMutableArray *)deletePersonRecords;
-(void)organizeRecords:(id)arg1 ;
-(NSMutableArray *)assetRecordsWithContainerChange;
-(NSMutableArray *)albumRecordsWithContainerChange;
-(NSMutableArray *)personRecords;
-(NSMutableArray *)scopeRecords;
-(NSMutableArray *)masterRecords;
-(NSMutableArray *)assetRecords;
-(NSMutableArray *)albumRecords;
-(NSMutableArray *)memoryRecords;
-(NSMutableArray *)faceCropRecords;
-(NSMutableArray *)deleteRecords;
-(NSMutableArray *)expungedRecords;
-(NSMutableArray *)suggestionRecords;
@end

