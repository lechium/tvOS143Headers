/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OSLaunchdDomain : NSObject {

	int _type;
	unsigned long long _handle;

}
+(id)currentDomain;
+(id)domainForUser:(unsigned)arg1 ;
+(id)domainForPid:(int)arg1 ;
+(id)loginwindowDomain;
-(id)initWithType:(int)arg1 handle:(unsigned long long)arg2 ;
@end

