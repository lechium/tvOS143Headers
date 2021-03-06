/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUINowPlayingFeature <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove; 
@property (nonatomic,retain) id userInfo; 
@required
-(id)userInfo;
-(unsigned long long)type;
-(void)setUserInfo:(id)arg1;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1;

@end

