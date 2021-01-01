/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSSet, NSMutableArray;

@interface MTDictionaryDiff : NSObject {

	NSDictionary* _dictionary;
	NSSet* _properties;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,retain) NSDictionary * dictionary;               //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSSet * properties;                      //@synthesize properties=_properties - In the implementation block
-(id)init;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithProperties:(id)arg1 ;
-(NSSet *)properties;
-(NSMutableArray *)callbacks;
-(void)setProperties:(NSSet *)arg1 ;
-(void)addCallback:(/*^block*/id)arg1 ;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
@end

