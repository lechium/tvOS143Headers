/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGManager, PGGraph;

@interface PGSharingFeatureExtractor : NSObject {

	PGManager* _manager;
	PGGraph* _graph;

}
+(id)extractFeatureNodesFromAsset:(id)arg1 andPersonLocalIdentifiers:(id)arg2 inGraph:(id)arg3 ;
+(id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)arg1 ;
+(id)featuresFilename;
+(id)recordsFilename;
+(void)invalideCacheForManager:(id)arg1 ;
-(id)persistedFeatures;
-(id)initWithManager:(id)arg1 graph:(id)arg2 ;
-(id)_loadAllPersistedSharingRecordsFromDisk;
-(void)prefetchMomentNodeAndAssetInSharingRecords:(id)arg1 ;
-(id)persistedSharingRecords;
-(id)persistedSharingRecordsForType:(unsigned long long)arg1 ;
-(BOOL)persistSharingRecords:(id)arg1 ;
-(id)extractSharingRecordsWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)persistFeatures:(id)arg1 ;
-(id)extractFeaturesFromSharingRecords:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
@end

