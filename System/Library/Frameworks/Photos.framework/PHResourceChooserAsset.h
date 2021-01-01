/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSManagedObjectID, NSData, NSManagedObjectContext;


@protocol PHResourceChooserAsset <PLAssetID>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSData * imageRequestHints; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) BOOL hasAdjustments; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContextForFetchingResources; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long effectiveThumbnailIndex; 
@property (nonatomic,readonly) BOOL isRAWPlusJPEG; 
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@required
-(NSManagedObjectID *)objectID;
-(long long)mediaType;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(BOOL)hasAdjustments;
-(unsigned long long)effectiveThumbnailIndex;
-(unsigned long long)originalResourceChoice;
-(BOOL)isRAWPlusJPEG;
-(NSData *)imageRequestHints;
-(NSManagedObjectContext *)managedObjectContextForFetchingResources;

@end
