/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject {

	BOOL _shouldInterleaveClientResults;
	BOOL _enforceServerResultsOrder;
	NSArray* _results;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * results;                               //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL shouldInterleaveClientResults;              //@synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults - In the implementation block
@property (nonatomic,readonly) BOOL enforceServerResultsOrder;                  //@synthesize enforceServerResultsOrder=_enforceServerResultsOrder - In the implementation block
-(NSArray *)results;
-(NSString *)title;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(BOOL)arg3 enforceServerResultsOrder:(BOOL)arg4 ;
@end

