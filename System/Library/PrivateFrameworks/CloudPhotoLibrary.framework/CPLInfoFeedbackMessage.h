/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage {

	NSDictionary* _info;

}

@property (nonatomic,readonly) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)feedbackType;
-(id)initWithInfo:(id)arg1 ;
-(NSDictionary *)info;
-(id)serverMessage;
@end

