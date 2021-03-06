
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function BitBtn_Create(AOwner: TComponent): TBitBtn; extdecl;
begin
  Result :=  TBitBtn.Create(AOwner);
end;

procedure BitBtn_Free(AObj: TBitBtn); extdecl;
begin
  AObj.Free;
end;

procedure BitBtn_Click(AObj: TBitBtn); extdecl;
begin
  AObj.Click;
end;

function BitBtn_CanFocus(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function BitBtn_ContainsControl(AObj: TBitBtn; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function BitBtn_ControlAtPos(AObj: TBitBtn; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure BitBtn_DisableAlign(AObj: TBitBtn); extdecl;
begin
  AObj.DisableAlign;
end;

procedure BitBtn_EnableAlign(AObj: TBitBtn); extdecl;
begin
  AObj.EnableAlign;
end;

function BitBtn_FindChildControl(AObj: TBitBtn; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure BitBtn_FlipChildren(AObj: TBitBtn; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function BitBtn_Focused(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function BitBtn_HandleAllocated(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure BitBtn_InsertControl(AObj: TBitBtn; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure BitBtn_Invalidate(AObj: TBitBtn); extdecl;
begin
  AObj.Invalidate;
end;

procedure BitBtn_RemoveControl(AObj: TBitBtn; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure BitBtn_Realign(AObj: TBitBtn); extdecl;
begin
  AObj.Realign;
end;

procedure BitBtn_Repaint(AObj: TBitBtn); extdecl;
begin
  AObj.Repaint;
end;

procedure BitBtn_ScaleBy(AObj: TBitBtn; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure BitBtn_ScrollBy(AObj: TBitBtn; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure BitBtn_SetBounds(AObj: TBitBtn; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure BitBtn_SetFocus(AObj: TBitBtn); extdecl;
begin
  AObj.SetFocus;
end;

procedure BitBtn_Update(AObj: TBitBtn); extdecl;
begin
  AObj.Update;
end;

procedure BitBtn_BringToFront(AObj: TBitBtn); extdecl;
begin
  AObj.BringToFront;
end;

procedure BitBtn_ClientToScreen(AObj: TBitBtn; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure BitBtn_ClientToParent(AObj: TBitBtn; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function BitBtn_Dragging(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function BitBtn_HasParent(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure BitBtn_Hide(AObj: TBitBtn); extdecl;
begin
  AObj.Hide;
end;

function BitBtn_Perform(AObj: TBitBtn; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure BitBtn_Refresh(AObj: TBitBtn); extdecl;
begin
  AObj.Refresh;
end;

procedure BitBtn_ScreenToClient(AObj: TBitBtn; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure BitBtn_ParentToClient(AObj: TBitBtn; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure BitBtn_SendToBack(AObj: TBitBtn); extdecl;
begin
  AObj.SendToBack;
end;

procedure BitBtn_Show(AObj: TBitBtn); extdecl;
begin
  AObj.Show;
end;

function BitBtn_GetTextBuf(AObj: TBitBtn; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function BitBtn_GetTextLen(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure BitBtn_SetTextBuf(AObj: TBitBtn; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function BitBtn_FindComponent(AObj: TBitBtn; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function BitBtn_GetNamePath(AObj: TBitBtn): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure BitBtn_Assign(AObj: TBitBtn; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function BitBtn_ClassType(AObj: TBitBtn): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function BitBtn_ClassName(AObj: TBitBtn): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function BitBtn_InstanceSize(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function BitBtn_InheritsFrom(AObj: TBitBtn; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function BitBtn_Equals(AObj: TBitBtn; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function BitBtn_GetHashCode(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function BitBtn_ToString(AObj: TBitBtn): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function BitBtn_GetAction(AObj: TBitBtn): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure BitBtn_SetAction(AObj: TBitBtn; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function BitBtn_GetAlign(AObj: TBitBtn): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure BitBtn_SetAlign(AObj: TBitBtn; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function BitBtn_GetAnchors(AObj: TBitBtn): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure BitBtn_SetAnchors(AObj: TBitBtn; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function BitBtn_GetBiDiMode(AObj: TBitBtn): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure BitBtn_SetBiDiMode(AObj: TBitBtn; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function BitBtn_GetCancel(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.Cancel;
end;

procedure BitBtn_SetCancel(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.Cancel := AValue;
end;

function BitBtn_GetCaption(AObj: TBitBtn): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure BitBtn_SetCaption(AObj: TBitBtn; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function BitBtn_GetDefault(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.Default;
end;

procedure BitBtn_SetDefault(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.Default := AValue;
end;

function BitBtn_GetDoubleBuffered(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure BitBtn_SetDoubleBuffered(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function BitBtn_GetEnabled(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure BitBtn_SetEnabled(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function BitBtn_GetFont(AObj: TBitBtn): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure BitBtn_SetFont(AObj: TBitBtn; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function BitBtn_GetGlyph(AObj: TBitBtn): TBitmap; extdecl;
begin
  Result :=  AObj.Glyph;
end;

procedure BitBtn_SetGlyph(AObj: TBitBtn; AValue: TBitmap); extdecl;
begin
  AObj.Glyph := AValue;
end;

function BitBtn_GetLayout(AObj: TBitBtn): TButtonLayout; extdecl;
begin
  Result :=  AObj.Layout;
end;

procedure BitBtn_SetLayout(AObj: TBitBtn; AValue: TButtonLayout); extdecl;
begin
  AObj.Layout := AValue;
end;

function BitBtn_GetModalResult(AObj: TBitBtn): TModalResult; extdecl;
begin
  Result :=  AObj.ModalResult;
end;

procedure BitBtn_SetModalResult(AObj: TBitBtn; AValue: TModalResult); extdecl;
begin
  AObj.ModalResult := AValue;
end;

function BitBtn_GetNumGlyphs(AObj: TBitBtn): TNumGlyphs; extdecl;
begin
  Result :=  AObj.NumGlyphs;
end;

procedure BitBtn_SetNumGlyphs(AObj: TBitBtn; AValue: TNumGlyphs); extdecl;
begin
  AObj.NumGlyphs := AValue;
end;

function BitBtn_GetParentFont(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure BitBtn_SetParentFont(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function BitBtn_GetParentShowHint(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure BitBtn_SetParentShowHint(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function BitBtn_GetPopupMenu(AObj: TBitBtn): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure BitBtn_SetPopupMenu(AObj: TBitBtn; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function BitBtn_GetShowHint(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure BitBtn_SetShowHint(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function BitBtn_GetSpacing(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.Spacing;
end;

procedure BitBtn_SetSpacing(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.Spacing := AValue;
end;

function BitBtn_GetTabOrder(AObj: TBitBtn): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure BitBtn_SetTabOrder(AObj: TBitBtn; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function BitBtn_GetTabStop(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure BitBtn_SetTabStop(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function BitBtn_GetVisible(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure BitBtn_SetVisible(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure BitBtn_SetOnClick(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure BitBtn_SetOnContextPopup(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure BitBtn_SetOnDragDrop(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure BitBtn_SetOnDragOver(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure BitBtn_SetOnEndDrag(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure BitBtn_SetOnEnter(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure BitBtn_SetOnExit(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure BitBtn_SetOnKeyDown(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure BitBtn_SetOnKeyPress(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure BitBtn_SetOnKeyUp(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

procedure BitBtn_SetOnMouseDown(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure BitBtn_SetOnMouseEnter(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure BitBtn_SetOnMouseLeave(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure BitBtn_SetOnMouseMove(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure BitBtn_SetOnMouseUp(AObj: TBitBtn; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

function BitBtn_GetDockClientCount(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function BitBtn_GetDockSite(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure BitBtn_SetDockSite(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function BitBtn_GetVisibleDockClientCount(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function BitBtn_GetBrush(AObj: TBitBtn): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function BitBtn_GetControlCount(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function BitBtn_GetHandle(AObj: TBitBtn): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function BitBtn_GetParentWindow(AObj: TBitBtn): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure BitBtn_SetParentWindow(AObj: TBitBtn; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function BitBtn_GetUseDockManager(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure BitBtn_SetUseDockManager(AObj: TBitBtn; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

procedure BitBtn_GetBoundsRect(AObj: TBitBtn; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure BitBtn_SetBoundsRect(AObj: TBitBtn; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function BitBtn_GetClientHeight(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure BitBtn_SetClientHeight(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure BitBtn_GetClientOrigin(AObj: TBitBtn; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure BitBtn_GetClientRect(AObj: TBitBtn; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function BitBtn_GetClientWidth(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure BitBtn_SetClientWidth(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function BitBtn_GetControlState(AObj: TBitBtn): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure BitBtn_SetControlState(AObj: TBitBtn; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function BitBtn_GetControlStyle(AObj: TBitBtn): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure BitBtn_SetControlStyle(AObj: TBitBtn; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function BitBtn_GetFloating(AObj: TBitBtn): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function BitBtn_GetParent(AObj: TBitBtn): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure BitBtn_SetParent(AObj: TBitBtn; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function BitBtn_GetLeft(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure BitBtn_SetLeft(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function BitBtn_GetTop(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure BitBtn_SetTop(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function BitBtn_GetWidth(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure BitBtn_SetWidth(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function BitBtn_GetHeight(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure BitBtn_SetHeight(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function BitBtn_GetCursor(AObj: TBitBtn): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure BitBtn_SetCursor(AObj: TBitBtn; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function BitBtn_GetHint(AObj: TBitBtn): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure BitBtn_SetHint(AObj: TBitBtn; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function BitBtn_GetComponentCount(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function BitBtn_GetComponentIndex(AObj: TBitBtn): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure BitBtn_SetComponentIndex(AObj: TBitBtn; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function BitBtn_GetOwner(AObj: TBitBtn): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function BitBtn_GetName(AObj: TBitBtn): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure BitBtn_SetName(AObj: TBitBtn; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function BitBtn_GetTag(AObj: TBitBtn): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure BitBtn_SetTag(AObj: TBitBtn; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function BitBtn_GetDockClients(AObj: TBitBtn; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function BitBtn_GetControls(AObj: TBitBtn; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function BitBtn_GetComponents(AObj: TBitBtn; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function BitBtn_StaticClassType: TClass; extdecl;
begin
  Result := TBitBtn;
end;

exports
  BitBtn_Create,
  BitBtn_Free,
  BitBtn_Click,
  BitBtn_CanFocus,
  BitBtn_ContainsControl,
  BitBtn_ControlAtPos,
  BitBtn_DisableAlign,
  BitBtn_EnableAlign,
  BitBtn_FindChildControl,
  BitBtn_FlipChildren,
  BitBtn_Focused,
  BitBtn_HandleAllocated,
  BitBtn_InsertControl,
  BitBtn_Invalidate,
  BitBtn_RemoveControl,
  BitBtn_Realign,
  BitBtn_Repaint,
  BitBtn_ScaleBy,
  BitBtn_ScrollBy,
  BitBtn_SetBounds,
  BitBtn_SetFocus,
  BitBtn_Update,
  BitBtn_BringToFront,
  BitBtn_ClientToScreen,
  BitBtn_ClientToParent,
  BitBtn_Dragging,
  BitBtn_HasParent,
  BitBtn_Hide,
  BitBtn_Perform,
  BitBtn_Refresh,
  BitBtn_ScreenToClient,
  BitBtn_ParentToClient,
  BitBtn_SendToBack,
  BitBtn_Show,
  BitBtn_GetTextBuf,
  BitBtn_GetTextLen,
  BitBtn_SetTextBuf,
  BitBtn_FindComponent,
  BitBtn_GetNamePath,
  BitBtn_Assign,
  BitBtn_ClassType,
  BitBtn_ClassName,
  BitBtn_InstanceSize,
  BitBtn_InheritsFrom,
  BitBtn_Equals,
  BitBtn_GetHashCode,
  BitBtn_ToString,
  BitBtn_GetAction,
  BitBtn_SetAction,
  BitBtn_GetAlign,
  BitBtn_SetAlign,
  BitBtn_GetAnchors,
  BitBtn_SetAnchors,
  BitBtn_GetBiDiMode,
  BitBtn_SetBiDiMode,
  BitBtn_GetCancel,
  BitBtn_SetCancel,
  BitBtn_GetCaption,
  BitBtn_SetCaption,
  BitBtn_GetDefault,
  BitBtn_SetDefault,
  BitBtn_GetDoubleBuffered,
  BitBtn_SetDoubleBuffered,
  BitBtn_GetEnabled,
  BitBtn_SetEnabled,
  BitBtn_GetFont,
  BitBtn_SetFont,
  BitBtn_GetGlyph,
  BitBtn_SetGlyph,
  BitBtn_GetLayout,
  BitBtn_SetLayout,
  BitBtn_GetModalResult,
  BitBtn_SetModalResult,
  BitBtn_GetNumGlyphs,
  BitBtn_SetNumGlyphs,
  BitBtn_GetParentFont,
  BitBtn_SetParentFont,
  BitBtn_GetParentShowHint,
  BitBtn_SetParentShowHint,
  BitBtn_GetPopupMenu,
  BitBtn_SetPopupMenu,
  BitBtn_GetShowHint,
  BitBtn_SetShowHint,
  BitBtn_GetSpacing,
  BitBtn_SetSpacing,
  BitBtn_GetTabOrder,
  BitBtn_SetTabOrder,
  BitBtn_GetTabStop,
  BitBtn_SetTabStop,
  BitBtn_GetVisible,
  BitBtn_SetVisible,
  BitBtn_SetOnClick,
  BitBtn_SetOnContextPopup,
  BitBtn_SetOnDragDrop,
  BitBtn_SetOnDragOver,
  BitBtn_SetOnEndDrag,
  BitBtn_SetOnEnter,
  BitBtn_SetOnExit,
  BitBtn_SetOnKeyDown,
  BitBtn_SetOnKeyPress,
  BitBtn_SetOnKeyUp,
  BitBtn_SetOnMouseDown,
  BitBtn_SetOnMouseEnter,
  BitBtn_SetOnMouseLeave,
  BitBtn_SetOnMouseMove,
  BitBtn_SetOnMouseUp,
  BitBtn_GetDockClientCount,
  BitBtn_GetDockSite,
  BitBtn_SetDockSite,
  BitBtn_GetVisibleDockClientCount,
  BitBtn_GetBrush,
  BitBtn_GetControlCount,
  BitBtn_GetHandle,
  BitBtn_GetParentWindow,
  BitBtn_SetParentWindow,
  BitBtn_GetUseDockManager,
  BitBtn_SetUseDockManager,
  BitBtn_GetBoundsRect,
  BitBtn_SetBoundsRect,
  BitBtn_GetClientHeight,
  BitBtn_SetClientHeight,
  BitBtn_GetClientOrigin,
  BitBtn_GetClientRect,
  BitBtn_GetClientWidth,
  BitBtn_SetClientWidth,
  BitBtn_GetControlState,
  BitBtn_SetControlState,
  BitBtn_GetControlStyle,
  BitBtn_SetControlStyle,
  BitBtn_GetFloating,
  BitBtn_GetParent,
  BitBtn_SetParent,
  BitBtn_GetLeft,
  BitBtn_SetLeft,
  BitBtn_GetTop,
  BitBtn_SetTop,
  BitBtn_GetWidth,
  BitBtn_SetWidth,
  BitBtn_GetHeight,
  BitBtn_SetHeight,
  BitBtn_GetCursor,
  BitBtn_SetCursor,
  BitBtn_GetHint,
  BitBtn_SetHint,
  BitBtn_GetComponentCount,
  BitBtn_GetComponentIndex,
  BitBtn_SetComponentIndex,
  BitBtn_GetOwner,
  BitBtn_GetName,
  BitBtn_SetName,
  BitBtn_GetTag,
  BitBtn_SetTag,
  BitBtn_GetDockClients,
  BitBtn_GetControls,
  BitBtn_GetComponents,
  BitBtn_StaticClassType;

