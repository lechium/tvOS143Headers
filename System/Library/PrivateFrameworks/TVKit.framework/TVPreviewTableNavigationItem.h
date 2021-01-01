/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSAttributedString, NSDictionary;

@interface TVPreviewTableNavigationItem : NSObject {

	NSAttributedString* _attributedText;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithAttributedText:(id)arg1 userInfo:(id)arg2 ;
@end
