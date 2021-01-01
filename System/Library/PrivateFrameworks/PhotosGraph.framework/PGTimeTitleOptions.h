/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSLocale;

@interface PGTimeTitleOptions : NSObject {

	BOOL _filterDates;
	NSSet* _momentNodes;
	NSSet* _locationNodes;
	unsigned long long _allowedFormats;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSSet * momentNodes;                            //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSSet * locationNodes;                          //@synthesize locationNodes=_locationNodes - In the implementation block
@property (assign,nonatomic) unsigned long long allowedFormats;              //@synthesize allowedFormats=_allowedFormats - In the implementation block
@property (assign,nonatomic) BOOL filterDates;                               //@synthesize filterDates=_filterDates - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                              //@synthesize locale=_locale - In the implementation block
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)allowedFormats;
-(void)setAllowedFormats:(unsigned long long)arg1 ;
-(BOOL)filterDates;
-(void)setFilterDates:(BOOL)arg1 ;
@end
