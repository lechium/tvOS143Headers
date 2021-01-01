/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrint100kDoorbellModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _soundprint_Placeholder;

}

@property (nonatomic,retain) MLMultiArray * soundprint_Placeholder;              //@synthesize soundprint_Placeholder=_soundprint_Placeholder - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithSoundprint_Placeholder:(id)arg1 ;
-(MLMultiArray *)soundprint_Placeholder;
-(void)setSoundprint_Placeholder:(MLMultiArray *)arg1 ;
@end

