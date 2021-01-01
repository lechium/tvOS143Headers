/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface SQSimilarityCluster : NSObject {

	long long _clusterType;
	NSArray* _mediaItems;
	NSString* _clusterID;
	NSArray* _genres;
	long long _cohesionLevel;

}

@property (assign,nonatomic) long long clusterType;                //@synthesize clusterType=_clusterType - In the implementation block
@property (nonatomic,retain) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                   //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSArray * genres;                       //@synthesize genres=_genres - In the implementation block
@property (assign,nonatomic) long long cohesionLevel;              //@synthesize cohesionLevel=_cohesionLevel - In the implementation block
+(id)clusterOfType:(long long)arg1 ;
-(long long)clusterType;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(void)setClusterType:(long long)arg1 ;
-(NSString *)clusterID;
-(void)setClusterID:(NSString *)arg1 ;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(void)appendMediaItem:(id)arg1 ;
-(void)setCohesionLevel:(long long)arg1 ;
-(long long)cohesionLevel;
@end
