/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol OKActionExports <JSExport>
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long touchCount; 
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,retain,readonly) NSDictionary * context; 
@required
-(unsigned long long)state;
-(NSDictionary *)context;
-(double)timestamp;
-(unsigned long long)platform;
-(CGPoint)location;
-(unsigned long long)touchCount;
-(void)setContextObject:(id)arg1 forKey:(id)arg2;

@end
