/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSXPCDecoding <NSObject>
@required
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
-(long long)decodeInt64ForKey:(id)arg1;
-(BOOL)containsValueForKey:(id)arg1;
-(double)decodeDoubleForKey:(id)arg1;
-(BOOL)decodeBoolForKey:(id)arg1;
-(id)decodeXPCObjectOfType:(const xpc_type_sRef)arg1 forKey:(id)arg2;
-(id)decodeStringForKey:(id)arg1;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
-(CGPoint*)decodeCGPointForKey:(id)arg1;
-(CGSize*)decodeCGSizeForKey:(id)arg1;
-(CGRect*)decodeCGRectForKey:(id)arg1;
-(unsigned long long)decodeUInt64ForKey:(id)arg1;

@end

