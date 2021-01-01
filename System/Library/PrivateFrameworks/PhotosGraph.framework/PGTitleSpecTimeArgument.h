/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecTimeArgument : PGTitleSpecArgument {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)argumentWithTimeType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg1 ;
-(id)initWithTimeType:(unsigned long long)arg1 ;
-(id)_yearsAgoTitle;
-(id)_anniversaryTitleWithMomentNodes:(id)arg1 ;
-(id)_yearsAgoStringWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 ;
-(id)_holidayTitleWithMomentNodes:(id)arg1 ;
@end

