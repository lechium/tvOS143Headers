/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLModel;

@interface PPNamedEntityFilter : NSObject {

	MLModel* _model;

}
-(id)init;
-(id)initWithModel:(id)arg1 ;
-(id)filterScoredNamedEntities:(id)arg1 ;
-(id)filterNamedEntityRecords:(id)arg1 ;
-(BOOL)isAcceptableRecord:(id)arg1 ;
@end
