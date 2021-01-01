/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeatureExtractor.h>

@class NSLocale;

@interface PGFeatureExtractorLocale : PGFeatureExtractor {

	NSLocale* _currentLocale;

}

@property (nonatomic,retain) NSLocale * currentLocale;              //@synthesize currentLocale=_currentLocale - In the implementation block
-(id)name;
-(id)init;
-(NSLocale *)currentLocale;
-(id)featureNames;
-(void)setCurrentLocale:(NSLocale *)arg1 ;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureLength;
@end

