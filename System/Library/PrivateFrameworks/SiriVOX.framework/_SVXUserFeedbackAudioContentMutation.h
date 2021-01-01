/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXUserFeedbackAudioContentMutating.h>

@class SVXUserFeedbackAudioContent, NSURL, NSString;

@interface _SVXUserFeedbackAudioContentMutation : NSObject <SVXUserFeedbackAudioContentMutating> {

	SVXUserFeedbackAudioContent* _baseModel;
	NSURL* _itemURL;
	unsigned long long _numberOfLoops;
	double _fadeInDuration;
	double _fadeOutDuration;
	struct {
		unsigned isDirty : 1;
		unsigned hasItemURL : 1;
		unsigned hasNumberOfLoops : 1;
		unsigned hasFadeInDuration : 1;
		unsigned hasFadeOutDuration : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setNumberOfLoops:(unsigned long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setItemURL:(id)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
@end

