/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AddressBookUI/ABAbstractPropertyGroup.h>

@class ABUIPerson, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface ABNamePropertyGroup : ABAbstractPropertyGroup
{
    NSMutableArray *_properties;
    ABUIPerson *_preferredPerson;
    NSMutableSet *_propertiesWithMultipleValuePlaceholders;
    NSMutableDictionary *_valuesByPersonByProperty;
    id <ABPrimaryValueDelegate> _delegate;
}

@property(readonly, nonatomic) ABUIPerson *preferredPerson; // @synthesize preferredPerson=_preferredPerson;
@property(nonatomic) id <ABPrimaryValueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyCompositeNameIgnoringOrganization:(BOOL)arg1;
- (id)copyCompositePhoneticName;
- (id)copyCompositeName;
- (id)_fakePersonFromCurrentProperties;
- (BOOL)showsMultipleValuePlaceholderAtRow:(unsigned int)arg1;
- (id)keyboardSettingsForRow:(unsigned int)arg1;
- (BOOL)autofillValuesForRow:(unsigned int)arg1;
- (void)setValue:(id)arg1 atRow:(unsigned int)arg2;
- (id)valueForRow:(unsigned int)arg1 whenEditing:(BOOL)arg2;
- (id)placeholderTextForRow:(unsigned int)arg1;
- (id)primaryValueForProperty:(int)arg1;
- (BOOL)showsMultipleValuePlaceholderForProperty:(int)arg1;
- (BOOL)canSave;
- (id)valueForProperty:(int)arg1;
- (int)propertyForRow:(unsigned int)arg1;
- (unsigned int)rowForProperty:(int)arg1;
- (void)addNameProperty:(int)arg1;
- (struct __CFArray *)nameProperties;
- (unsigned int)namePropertiesCount;
- (void)reloadFromModel;
- (void)updateRecord;
- (id)_allPeople;
- (int)property;
- (void)dealloc;
- (id)init;
- (BOOL)refreshPreferredPerson;
- (id)_newLocalizedPlaceholderForProperty:(int)arg1;
- (id)_valueForProperty:(int)arg1 person:(id)arg2;
- (void)_removeValueForProperty:(int)arg1;
- (void)_setValue:(id)arg1 forProperty:(int)arg2;
- (id)_indexPathForIndexPath:(id)arg1;
- (BOOL)_isEmptyValue:(id)arg1 forProperty:(int)arg2;
- (void)_removeMultipleValuePlaceholderForProperty:(int)arg1;
- (BOOL)_showsMultipleValuePlaceholderForProperty:(int)arg1;
- (int)_indexForProperty:(int)arg1;
- (id)_labelAtIndex:(int)arg1;
- (int)_propertyAtIndex:(unsigned int)arg1;
- (void)_addItemForProperty:(int)arg1 duringReload:(BOOL)arg2;
- (void)_insertItemAtIndex:(int)arg1 forProperty:(int)arg2 duringReload:(BOOL)arg3;
- (void)_clearAllCachedInfo;

@end
