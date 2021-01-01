/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRRecognizerFeatureProviding <NSObject>
@required
-(void)enumerateInputsForImage:(id)arg1 textFeatures:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(id)pruneAndSortRecognizedTextFeatures:(id)arg1;
-(id)initWithConfiguration:(id)arg1 inputProvider:(id)arg2 error:(id*)arg3;

@end
