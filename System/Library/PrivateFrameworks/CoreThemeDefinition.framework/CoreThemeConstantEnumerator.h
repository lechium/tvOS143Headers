/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CoreThemeConstantEnumerator : NSObject {

	void* _globalListPointer;
	long long _listIndex;
	long long _indexOfLastEntry;
	BOOL _isPastLastEntry;

}
+(id)enumeratorForGlobalListAtAddress:(void*)arg1 ;
-(id)initWithGlobalListAtAddress:(void*)arg1 ;
-(id)nextConstantHelper;
-(void)_moveToIndexOfLastEntry;
-(id)currentConstantHelper;
-(long long)constantCount;
-(id)previousConstantHelper;
-(id)firstConstantHelper;
-(id)lastConstantHelper;
@end

