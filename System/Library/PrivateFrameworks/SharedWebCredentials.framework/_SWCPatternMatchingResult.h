/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _SWCPatternMatchingResult : NSObject {

	BOOL _excluded;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (getter=isExcluded,nonatomic,readonly) BOOL excluded;              //@synthesize excluded=_excluded - In the implementation block
+(id)new;
-(id)init;
-(unsigned long long)index;
-(BOOL)isExcluded;
-(id)_initWithIndex:(unsigned long long)arg1 excluded:(BOOL)arg2 ;
@end
