/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _EARLatticeMitigatorResult : NSObject <NSCopying> {

	float _score;
	float _threshold;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) float score;                          //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) float threshold;                      //@synthesize threshold=_threshold - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)version;
-(float)score;
-(float)threshold;
-(id)initWithVersion:(id)arg1 score:(float)arg2 threshold:(float)arg3 ;
@end
