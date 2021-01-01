/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXSuggestionToken : NSObject {

	BOOL _canceled;
	unsigned long long _token;

}

@property (assign,nonatomic) unsigned long long token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                       //@synthesize canceled=_canceled - In the implementation block
-(id)init;
-(void)cancel;
-(unsigned long long)token;
-(void)setToken:(unsigned long long)arg1 ;
-(BOOL)canceled;
@end

