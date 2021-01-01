/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebCore/WebCore-Structs.h>
@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {

	DisplayRefreshMonitorIOS* m_monitor;
	CADisplayLink* m_displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithMonitor:(DisplayRefreshMonitorIOS*)arg1 ;
@end

