/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned long long)colorSpaceID;

@required
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(unsigned)distilledInCoreUIVersion;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
-(double)fontSizeForFontSizeType:(id)arg1;
-(BOOL)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(BOOL)hasPhysicalColorWithName:(id)arg1;
-(unsigned)documentFormatVersion;
-(unsigned)authoredWithSchemaVersion;
-(id)catalogGlobals;

@end

