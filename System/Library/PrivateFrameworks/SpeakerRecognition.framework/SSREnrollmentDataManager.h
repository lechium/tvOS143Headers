/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SSREnrollmentDataManager : NSObject
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(BOOL)saveMetadata:(id)arg1 isExplicitEnrollment:(BOOL)arg2 ;
+(BOOL)saveUtterance:(id)arg1 utteranceAudioPath:(id)arg2 numSamplesToWrite:(unsigned long long)arg3 isExplicitEnrollment:(BOOL)arg4 ;
+(BOOL)writeMetaDict:(id)arg1 atMetaPath:(id)arg2 ;
+(void)saveRawUtteranceAndMetadata:(id)arg1 to:(id)arg2 isExplicitEnrollment:(BOOL)arg3 ;
+(BOOL)saveUtteranceAndMetadata:(id)arg1 atDirectory:(id)arg2 isExplicitEnrollment:(BOOL)arg3 ;
@end

