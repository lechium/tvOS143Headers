/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NSKeyValueAccessor : NSObject {

	id _containerClassID;
	NSString* _key;
	unsigned long long _hash;
	/*function pointer*/void* _implementation;
	SEL _selector;
	unsigned long long _extraArgumentCount;
	void* _extraArgument1;
	void* _extraArgument2;
	void* _extraArgument3;

}
-(void)dealloc;
-(SEL)selector;
-(id)key;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(/*function pointer*/void*)arg3 selector:(SEL)arg4 extraArguments:(void**)arg5 count:(unsigned long long)arg6 ;
-(id)containerClassID;
-(unsigned long long)extraArgumentCount;
-(void*)extraArgument1;
-(void*)extraArgument2;
@end

