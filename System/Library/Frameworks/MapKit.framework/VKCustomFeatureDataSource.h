/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(unsigned char)sceneID;
-(BOOL)isClusteringEnabled;
-(unsigned char)sceneState;
-(id)annotationsInMapRect:(SCD_Struct_MK1)arg1;
-(id)clusterStyleAttributes;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;

@end
