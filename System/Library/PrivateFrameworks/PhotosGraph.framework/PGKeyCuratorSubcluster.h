/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLSInvestigationItem;
@interface PGKeyCuratorSubcluster : NSObject {

	id<CLSInvestigationItem> _keyItem;
	double _score;

}

@property (readonly) id<CLSInvestigationItem> keyItem;              //@synthesize keyItem=_keyItem - In the implementation block
@property (readonly) double score;                                  //@synthesize score=_score - In the implementation block
-(double)score;
-(id<CLSInvestigationItem>)keyItem;
-(id)initWithItems:(id)arg1 keyItem:(id)arg2 score:(double)arg3 ;
@end

