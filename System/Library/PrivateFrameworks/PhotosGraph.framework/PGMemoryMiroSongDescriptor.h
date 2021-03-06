/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet, NSDictionary;

@interface PGMemoryMiroSongDescriptor : NSObject {

	NSString* _songTitle;
	NSString* _artistName;
	id _songIdentifier;
	NSSet* _genres;
	unsigned long long _mood;
	long long _musicType;

}

@property (nonatomic,readonly) NSDictionary * diagnosticsDictionary; 
@property (nonatomic,readonly) NSString * songTitle;                              //@synthesize songTitle=_songTitle - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                             //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) id songIdentifier;                                 //@synthesize songIdentifier=_songIdentifier - In the implementation block
@property (nonatomic,readonly) long long musicType;                               //@synthesize musicType=_musicType - In the implementation block
@property (nonatomic,readonly) NSSet * genres;                                    //@synthesize genres=_genres - In the implementation block
@property (nonatomic,readonly) unsigned long long mood;                           //@synthesize mood=_mood - In the implementation block
-(id)description;
-(unsigned long long)mood;
-(NSString *)artistName;
-(NSString *)songTitle;
-(NSSet *)genres;
-(id)initWithMemory:(id)arg1 ;
-(id)songIdentifier;
-(long long)musicType;
-(NSDictionary *)diagnosticsDictionary;
@end

